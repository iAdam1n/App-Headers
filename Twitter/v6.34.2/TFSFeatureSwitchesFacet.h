/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TFSFeatureSwitchesFacet : NSObject {

	BOOL _requiresRestart;
	BOOL _supportsAccessibility;
	NSString* _name;
	NSString* _desc;
	NSString* _owner;
	NSArray* _parameters;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * desc;                         //@synthesize desc=_desc - In the implementation block
@property (nonatomic,readonly) NSString * owner;                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) BOOL requiresRestart;                    //@synthesize requiresRestart=_requiresRestart - In the implementation block
@property (nonatomic,readonly) BOOL supportsAccessibility;              //@synthesize supportsAccessibility=_supportsAccessibility - In the implementation block
@property (nonatomic,readonly) NSArray * parameters;                    //@synthesize parameters=_parameters - In the implementation block
+(id)facetWithDictionary:(id)arg1 ;
-(NSString *)desc;
-(id)initWithName:(id)arg1 description:(id)arg2 owner:(id)arg3 requiresRestart:(BOOL)arg4 supportsAccessibility:(BOOL)arg5 parameters:(id)arg6 ;
-(BOOL)requiresRestart;
-(BOOL)supportsAccessibility;
-(NSString *)name;
-(NSString *)owner;
-(NSArray *)parameters;
@end
