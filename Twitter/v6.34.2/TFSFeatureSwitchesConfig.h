/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSSet, NSDate, NSString;

@interface TFSFeatureSwitchesConfig : NSObject {

	NSDictionary* _values;
	NSSet* _embeddedDarkmoded;
	NSDate* _createdOn;
	NSString* _featureSwitchesVersion;
	NSString* _experimentsVersion;
	NSDictionary* _secondaryConfigurations;

}

@property (nonatomic,readonly) NSDate * createdOn;                                  //@synthesize createdOn=_createdOn - In the implementation block
@property (nonatomic,readonly) NSString * featureSwitchesVersion;                   //@synthesize featureSwitchesVersion=_featureSwitchesVersion - In the implementation block
@property (nonatomic,readonly) NSString * experimentsVersion;                       //@synthesize experimentsVersion=_experimentsVersion - In the implementation block
@property (nonatomic,readonly) NSDictionary * secondaryConfigurations;              //@synthesize secondaryConfigurations=_secondaryConfigurations - In the implementation block
+(id)overrideConfigWithConfig:(id)arg1 withValue:(id)arg2 forKey:(id)arg3 ;
+(id)overrideConfigWithConfig:(id)arg1 removeOverriddenValueForKey:(id)arg2 ;
+(id)configWithDictionary:(id)arg1 secondaryConfigurationKeys:(id)arg2 ;
+(id)configWithContentsOfFile:(id)arg1 secondaryConfigurationKeys:(id)arg2 error:(id*)arg3 ;
+(id)parseImpressions:(id)arg1 ;
+(id)parseEmbeddedDarkmoded:(id)arg1 ;
+(id)timeStamp;
-(NSDate *)createdOn;
-(id)keysDifferentFromConfig:(id)arg1 ;
-(BOOL)isEmbeddedExperimentDarkmodedForKey:(id)arg1 ;
-(NSDictionary *)secondaryConfigurations;
-(id)initWithValues:(id)arg1 embeddedDarkmoded:(id)arg2 secondaryConfigurations:(id)arg3 featureSwitchesVersion:(id)arg4 experimentsVersion:(id)arg5 ;
-(NSString *)featureSwitchesVersion;
-(NSString *)experimentsVersion;
-(void)logVersionsWithLogger:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)allKeys;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

