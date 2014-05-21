// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #include "REcmaSharedPointerAttributeData.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RAttributeDefinitionData.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSharedPointerTextBasedData.h"
                 void REcmaSharedPointerAttributeData::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RAttributeDataPointer*) 0)));
        protoCreated = true;
    }

    
        // primary base class RTextBasedData:
        
            proto->setPrototype(engine.defaultPrototype(
            qMetaTypeId<RTextBasedDataPointer>()));
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
    // copy:
    REcmaHelper::registerFunction(&engine, proto, copy, "copy");
    
        // shared pointer support:
        REcmaHelper::registerFunction(&engine, proto, data, "data");
        

        REcmaHelper::registerFunction(&engine, proto, isNull, "isNull");
        

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RTextBasedData
        REcmaHelper::registerFunction(&engine, proto, getRTextBasedData, "getRTextBasedData");
        
        // conversion for base class REntityData
        REcmaHelper::registerFunction(&engine, proto, getREntityData, "getREntityData");
        
        // conversion for base class RPainterPathSource
        REcmaHelper::registerFunction(&engine, proto, getRPainterPathSource, "getRPainterPathSource");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getRenderedText, "getRenderedText");
            
            REcmaHelper::registerFunction(&engine, proto, getTag, "getTag");
            
            REcmaHelper::registerFunction(&engine, proto, setTag, "setTag");
            
            REcmaHelper::registerFunction(&engine, proto, getLinetypeId, "getLinetypeId");
            
            REcmaHelper::registerFunction(&engine, proto, getLineweight, "getLineweight");
            
            REcmaHelper::registerFunction(&engine, proto, getColor, "getColor");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RAttributeDataPointer>(), *proto);
      
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RAttributeDataPointer",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSharedPointerAttributeData::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RAttributeData(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RAttributeData
                    cppResult;
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RTextBasedData */
            
                && (
                
                        context->argument(
                        1
                        ).isNumber()
                ) /* type: RBlockReferenceEntity::Id */
            
                && (
                
                        context->argument(
                        2
                        ).isString()
                ) /* type: QString */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RTextBasedData*
                    ap0 =
                    qscriptvalue_cast<
                    RTextBasedData*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RAttributeData: Argument 0 is not of type RTextBasedData.",
                               context);                    
                    }
                    RTextBasedData 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    RBlockReferenceEntity::Id
                    a1 =
                    (RBlockReferenceEntity::Id)
                    (int)
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    QString
                    a2 =
                    (QString)
                    
                    context->argument( 2 ).
                    toString();
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RAttributeData
                    cppResult(
                    a0
        ,
    a1
        ,
    a2
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RAttributeData(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaSharedPointerAttributeData::getRTextBasedData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RTextBasedData* cppResult =
                    qscriptvalue_cast<RAttributeData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaSharedPointerAttributeData::getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                REntityData* cppResult =
                    qscriptvalue_cast<RAttributeData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaSharedPointerAttributeData::getRPainterPathSource(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RPainterPathSource* cppResult =
                    qscriptvalue_cast<RAttributeData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaSharedPointerAttributeData::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RAttributeData"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSharedPointerAttributeData::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RTextBasedData");
    
        list.append("REntityData");
    
        list.append("RPainterPathSource");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaSharedPointerAttributeData::getRenderedText
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerAttributeData::getRenderedText", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerAttributeData::getRenderedText";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getRenderedText", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getRenderedText();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getRenderedText(a0);
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getRenderedText().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerAttributeData::getRenderedText", context, engine);
            return result;
        }
         QScriptValue
        REcmaSharedPointerAttributeData::getTag
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerAttributeData::getTag", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerAttributeData::getTag";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getTag", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getTag();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getTag().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerAttributeData::getTag", context, engine);
            return result;
        }
         QScriptValue
        REcmaSharedPointerAttributeData::setTag
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerAttributeData::setTag", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerAttributeData::setTag";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("setTag", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setTag(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.setTag().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerAttributeData::setTag", context, engine);
            return result;
        }
         QScriptValue
        REcmaSharedPointerAttributeData::getLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerAttributeData::getLinetypeId", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerAttributeData::getLinetypeId";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getLinetypeId", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isBool()
        ) /* type: bool */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: QStack < RBlockReferenceEntity * > */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
                    // argument is reference
                    QStack < RBlockReferenceEntity * >*
                    ap1 =
                    qscriptvalue_cast<
                    QStack < RBlockReferenceEntity * >*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RAttributeData: Argument 1 is not of type QStack < RBlockReferenceEntity * >*.",
                               context);                    
                    }
                    QStack < RBlockReferenceEntity * >& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'RLinetype::Id'
    RLinetype::Id cppResult =
        
               self->getLinetypeId(a0
        ,
    a1);
        // return type: RLinetype::Id
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getLinetypeId().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerAttributeData::getLinetypeId", context, engine);
            return result;
        }
         QScriptValue
        REcmaSharedPointerAttributeData::getLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerAttributeData::getLineweight", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerAttributeData::getLineweight";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getLineweight", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isBool()
        ) /* type: bool */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: QStack < RBlockReferenceEntity * > */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
                    // argument is reference
                    QStack < RBlockReferenceEntity * >*
                    ap1 =
                    qscriptvalue_cast<
                    QStack < RBlockReferenceEntity * >*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RAttributeData: Argument 1 is not of type QStack < RBlockReferenceEntity * >*.",
                               context);                    
                    }
                    QStack < RBlockReferenceEntity * >& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'RLineweight::Lineweight'
    RLineweight::Lineweight cppResult =
        
               self->getLineweight(a0
        ,
    a1);
        // return type: RLineweight::Lineweight
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getLineweight().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerAttributeData::getLineweight", context, engine);
            return result;
        }
         QScriptValue
        REcmaSharedPointerAttributeData::getColor
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerAttributeData::getColor", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerAttributeData::getColor";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeData* self = 
                        getSelf("getColor", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isBool()
        ) /* type: bool */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: QStack < RBlockReferenceEntity * > */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
                    // argument is reference
                    QStack < RBlockReferenceEntity * >*
                    ap1 =
                    qscriptvalue_cast<
                    QStack < RBlockReferenceEntity * >*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RAttributeData: Argument 1 is not of type QStack < RBlockReferenceEntity * >*.",
                               context);                    
                    }
                    QStack < RBlockReferenceEntity * >& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'RColor'
    RColor cppResult =
        
               self->getColor(a0
        ,
    a1);
        // return type: RColor
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeData.getColor().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerAttributeData::getColor", context, engine);
            return result;
        }
         QScriptValue REcmaSharedPointerAttributeData::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RAttributeData* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RAttributeDataPointer(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSharedPointerAttributeData::copy
    (QScriptContext *context, QScriptEngine *engine)
    
    {
        RAttributeData cp = qscriptvalue_cast<RAttributeData>(context->thisObject());
        return qScriptValueFromValue(engine, cp);
    }
     QScriptValue REcmaSharedPointerAttributeData::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RAttributeData* self = getSelf("RAttributeData", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RAttributeData* REcmaSharedPointerAttributeData::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RAttributeData* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RAttributeDataPointer >(context->thisObject())
                
                    ->data()
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RAttributeData.%1(): "
                        "This object is not a RAttributeData").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RAttributeData* REcmaSharedPointerAttributeData::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RAttributeData* selfBase = getSelf(fName, context);
                RAttributeData* self = dynamic_cast<RAttributeData*>(selfBase);
                //return REcmaHelper::scriptValueTo<RAttributeData >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RAttributeData.%1(): "
                    "This object is not a RAttributeData").arg(fName),
                    context);
            }

            return self;
            


        }
         QScriptValue REcmaSharedPointerAttributeData::data
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RAttributeData* self = getSelf("data", context);
    return qScriptValueFromValue(engine, self);
    }
     QScriptValue REcmaSharedPointerAttributeData::isNull
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RAttributeDataPointer* self = REcmaHelper::scriptValueTo<RAttributeDataPointer >(context->thisObject());

    //RAttributeData* self = getSelf("isNull", context);
    //Q_ASSERT(self!=NULL);
    if (self==NULL) {
        return REcmaHelper::throwError("self is NULL", context);
    }
    return qScriptValueFromValue(engine, self->isNull());
    }
    