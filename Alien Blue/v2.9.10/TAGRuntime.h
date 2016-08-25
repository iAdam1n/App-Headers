/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TAGExpandedResource, NSString, NSMutableDictionary, NSCache, NSSet, TAGDataLayer;

@interface TAGRuntime : NSObject {

	TAGExpandedResource* _resource;
	NSString* _currentEventName;
	NSMutableDictionary* _trackingTagMap;
	NSMutableDictionary* _predicateMap;
	NSMutableDictionary* _macroMap;
	NSCache* _functionCallCache;
	NSCache* _macroEvaluationCache;
	NSSet* _rules;
	NSMutableDictionary* _macroLookup;
	TAGDataLayer* _dataLayer;

}

@property (nonatomic,readonly) TAGExpandedResource * resource;                           //@synthesize resource=_resource - In the implementation block
@property (copy) NSString * currentEventName;                                            //@synthesize currentEventName=_currentEventName - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * trackingTagMap;              //@synthesize trackingTagMap=_trackingTagMap - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * predicateMap;                //@synthesize predicateMap=_predicateMap - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * macroMap;                    //@synthesize macroMap=_macroMap - In the implementation block
@property (nonatomic,retain,readonly) NSCache * functionCallCache;                       //@synthesize functionCallCache=_functionCallCache - In the implementation block
@property (nonatomic,retain,readonly) NSCache * macroEvaluationCache;                    //@synthesize macroEvaluationCache=_macroEvaluationCache - In the implementation block
@property (nonatomic,retain,readonly) NSSet * rules;                                     //@synthesize rules=_rules - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * macroLookup;                 //@synthesize macroLookup=_macroLookup - In the implementation block
@property (nonatomic,retain,readonly) TAGDataLayer * dataLayer;                          //@synthesize dataLayer=_dataLayer - In the implementation block
+(id)runtimeWithResource:(id)arg1 dataLayer:(id)arg2 functionCallMacroEvaluator:(id)arg3 functionCallTagEvaluator:(id)arg4 ;
+(id)functionNameFromFunctionCall:(id)arg1 ;
+(id)addOrGetMacroInfoForKey:(id)arg1 macroLookup:(id)arg2 ;
+(void)addFunctionImplToDict:(id)arg1 functionCallImpl:(id)arg2 ;
+(void)initialize;
-(void)setSupplementals:(id)arg1 ;
-(id)evaluateMacroReference:(id)arg1 ;
-(void)evaluateTags:(id)arg1 ;
-(TAGDataLayer *)dataLayer;
-(void)addMacro:(id)arg1 ;
-(id)initWithResource:(id)arg1 dataLayer:(id)arg2 functionCallMacroEvaluator:(id)arg3 functionCallTagEvaluator:(id)arg4 ;
-(void)addTrackingTag:(id)arg1 ;
-(void)addPredicate:(id)arg1 ;
-(NSMutableDictionary *)macroLookup;
-(void)setCurrentEventName:(NSString *)arg1 ;
-(id)calculateTagsToRunForRules:(id)arg1 ;
-(NSMutableDictionary *)trackingTagMap;
-(id)executeFunction:(id)arg1 implementationMap:(id)arg2 pendingMacroExpansions:(id)arg3 ;
-(id)calculateGenericToRunForRules:(id)arg1 pendingMacroExpansions:(id)arg2 populator:(id)arg3 ;
-(id)evaluatePredicatesInRule:(id)arg1 pendingMacroExpansions:(id)arg2 ;
-(NSMutableDictionary *)macroMap;
-(NSMutableDictionary *)predicateMap;
-(id)evaluatePredicate:(id)arg1 pendingMacroExpansions:(id)arg2 ;
-(id)evaluateMacroReferenceWithCycleDetection:(id)arg1 pendingMacroExpansions:(id)arg2 ;
-(NSCache *)macroEvaluationCache;
-(void)pushUnevaluatedValueToDataLayer:(id)arg1 pendingMacroExpansions:(id)arg2 ;
-(id)calculateMacrosToRunForRules:(id)arg1 macroName:(id)arg2 addMacros:(id)arg3 removeMacros:(id)arg4 pendingMacroExpansions:(id)arg5 ;
-(id)expandMacrosForValue:(id)arg1 pendingMacroExpansions:(id)arg2 ;
-(id)expandListValue:(id)arg1 pendingMacroExpansions:(id)arg2 ;
-(id)expandMapValue:(id)arg1 pendingMacroExpansions:(id)arg2 ;
-(id)expandMacroReferenceValue:(id)arg1 pendingMacroExpansions:(id)arg2 ;
-(id)expandTemplateValue:(id)arg1 pendingMacroExpansions:(id)arg2 ;
-(NSCache *)functionCallCache;
-(NSString *)currentEventName;
-(TAGExpandedResource *)resource;
-(NSSet *)rules;
@end

