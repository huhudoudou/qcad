/**
 * Copyright (c) 2011-2018 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */
#include "RDimArcLengthData.h"
#include "RUnit.h"

RDimArcLengthData::RDimArcLengthData() {
}

RDimArcLengthData::RDimArcLengthData(RDocument* document, const RDimArcLengthData& data)
    : RDimAngularData(document), arcSymbolType(0) {
    *this = data;
    this->document = document;
    if (document!=NULL) {
        linetypeId = document->getLinetypeByLayerId();
    }
}

/**
 * \param definitionPoint Definition point is extensionLine2End.
 */
RDimArcLengthData::RDimArcLengthData(const RDimensionData& dimData,
                                 const RVector& center,
                                 const RVector& extensionLine1End,
                                 const RVector& extensionLine2End)
    : RDimAngularData(dimData),
      center(center),
      extensionLine1End(extensionLine1End),
      extensionLine2End(extensionLine2End),
      arcSymbolType(0) {

}

bool RDimArcLengthData::isValid() const {
    return RDimAngularData::isValid() &&
            center.isValid() &&
            extensionLine1End.isValid() &&
            extensionLine2End.isValid();
}

bool RDimArcLengthData::isSane() const {
    return RDimAngularData::isSane() &&
            center.isSane() &&
            extensionLine1End.isSane() &&
            extensionLine2End.isSane();
}

double RDimArcLengthData::getRadius() const {
    return center.getDistanceTo(extensionLine1End);
}

QList<RRefPoint> RDimArcLengthData::getReferencePoints(RS::ProjectionRenderingHint hint) const {
    QList<RRefPoint> ret = RDimAngularData::getReferencePoints(hint);

    ret.append(center);

    return ret;
}

bool RDimArcLengthData::moveReferencePoint(const RVector& referencePoint,
        const RVector& targetPoint) {

    bool ret = false;

    if (referencePoint.equalsFuzzy(center)) {
        center = targetPoint;
        autoTextPos = true;
        ret = true;
    }

    if (!ret) {
        ret = RDimAngularData::moveReferencePoint(referencePoint, targetPoint);
    }

    if (ret) {
        update();
    }

    return ret;
}

bool RDimArcLengthData::move(const RVector& offset) {
    RDimAngularData::move(offset);
    center.move(offset);
    update();
    return true;
}

bool RDimArcLengthData::rotate(double rotation, const RVector& center) {
    RDimAngularData::rotate(rotation, center);
    this->center.rotate(rotation, center);
    update();
    return true;
}

bool RDimArcLengthData::scale(const RVector& scaleFactors, const RVector& center) {
    RDimAngularData::scale(scaleFactors, center);
    this->center.scale(scaleFactors, center);
    update();
    return true;
}

bool RDimArcLengthData::mirror(const RLine& axis) {
    RDimAngularData::mirror(axis);
    this->center.mirror(axis);
    update();
    return true;
}

/**
 * Finds out which angles this dimension actually measures.
 *
 * \param ang1 Reference will return the start angle
 * \param ang2 Reference will return the end angle
 * \param reversed Reference will return the reversed flag.
 *
 * \return true: on success
 */
bool RDimArcLengthData::getAngles(double& ang1, double& ang2, bool& reversed,
                              RVector& p1, RVector& p2) const {

    double ang = center.getAngleTo(definitionPoint);

    ang1 = center.getAngleTo(extensionLine1End);
    p1 = extensionLine1End;

    ang2 = center.getAngleTo(extensionLine2End);
    p2 = extensionLine2End;

    if (RMath::isAngleBetween(ang, ang1, ang2, false)) {
        reversed = false;
    }
    else {
        reversed = true;
    }

    return true;
}

double RDimArcLengthData::getMeasuredValue() const {
    return getAngle() * getRadius();
}

QString RDimArcLengthData::getAutoLabel() const {
    return formatArcLabel(getMeasuredValue());
}

QString RDimArcLengthData::formatArcLabel(double length) const {
    QString ret;
    if (arcSymbolType==0) {
        // arc symbol in front:
        ret = QString("{\\Fqcadshp|c0;%1}%2").arg(QChar(0x2312)).arg(length);
    }
    else if (arcSymbolType==1) {
        // arc symbol above:
        //ret = QString("{\\Fqcadshp|c0;%1}\\P%2").arg(QChar(0x2322)).arg(length);
        ret = QString("{\\Fqcadshp|c0;%1}%2").arg(QChar(0x2322)).arg(length);
    }
    else {
        ret = QString("%1").arg(length);
    }
    return ret;
}

//QList<QSharedPointer<RShape> > RDimArcLengthData::getShapes(const RBox& queryBox, bool ignoreComplex, bool segment) const {
//    QList<QSharedPointer<RShape> > ret = RDimAngularData::getShapes(queryBox, ignoreComplex, segment);

//    // add arc symbol in front:
//    if (arcSymbolType==0) {
//        RTextData& textData = getTextData();
//        RBox bb = textData.getBoundingBox(false);
//        qDebug();
//    }

//    return ret;
//}