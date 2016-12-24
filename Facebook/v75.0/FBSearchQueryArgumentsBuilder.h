/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface FBSearchQueryArgumentsBuilder : NSObject {

	NSMutableDictionary* _filteredQueryArguments;
	NSMutableDictionary* _secondRequestQueryArguments;
	NSString* _querySemantic;

}
+(id)newWithNativeTemplateCachedTemplatesVersion:(id)arg1 ;
-(id)setReactionContext:(id)arg1 ;
-(id)setCallsite:(id)arg1 ;
-(id)setQuerySemantic:(id)arg1 ;
-(id)setShouldReturnTopIndependentModulesOnly:(BOOL)arg1 ;
-(id)setAreTopIndependentModulesAlreadyShown:(BOOL)arg1 ;
-(id)setExactMatch:(BOOL)arg1 ;
-(id)setSupportedExperiences:(id)arg1 ;
-(id)setSupportedRoles:(id)arg1 ;
-(id)setPreloadedEntityIds:(id)arg1 ;
-(id)setPreloadedStoryIds:(id)arg1 ;
-(id)setTsid:(id)arg1 ;
-(id)setBsid:(id)arg1 ;
-(id)initWithNativeTemplateCachedTemplatesVersion:(id)arg1 ;
-(id)_setFilteredQueryArgument:(id)arg1 forKey:(id)arg2 emptyValue:(id)arg3 ;
-(id)setIndependentModuleOrFirstUnit:(BOOL)arg1 ;
-(id)setModuleSizes:(id)arg1 ;
-(id)setSecondRequest:(id)arg1 ;
-(id)description;
-(id)setFilters:(id)arg1 ;
-(id)build;
@end
