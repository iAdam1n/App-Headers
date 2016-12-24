/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TWTRJSONValidator : NSObject {

	NSDictionary* _transformers;
	NSDictionary* _outputValues;

}

@property (nonatomic,copy,readonly) NSDictionary * transformers;              //@synthesize transformers=_transformers - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * outputValues;              //@synthesize outputValues=_outputValues - In the implementation block
-(void)transformDictionary:(id)arg1 ;
-(BOOL)allRequiredKeysPresent:(id)arg1 ;
-(id)pruneDictionary:(id)arg1 ;
-(NSDictionary *)transformers;
-(NSDictionary *)outputValues;
-(BOOL)key:(id)arg1 isValidForClass:(Class)arg2 inDictionary:(id)arg3 ;
-(id)initWithValueTransformers:(id)arg1 outputValues:(id)arg2 ;
-(id)validatedDictionaryFromJSON:(id)arg1 ;
@end
