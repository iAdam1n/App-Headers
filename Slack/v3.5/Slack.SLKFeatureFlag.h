/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber;

@interface Slack.SLKFeatureFlag : NSObject <NSCoding> {

	 featureName;
	 featureKey;
	 featureServerName;
	 featureServerValue;
	 featureDefaultLocalValue;
	 featureDefaultTinySpeckValue;
	 featureForcedValue;
	 featureShouldShowInBetaScreen;

}

@property (copy,nonatomic) NSString * featureName; 
@property (copy,nonatomic) NSString * featureKey; 
@property (copy,nonatomic) NSString * featureServerName; 
@property (retain,nonatomic) NSNumber * featureServerValue; 
@property (retain,nonatomic) NSNumber * featureDefaultLocalValue; 
@property (retain,nonatomic) NSNumber * featureDefaultTinySpeckValue; 
@property (retain,nonatomic) NSNumber * featureForcedValue; 
@property (retain,nonatomic) NSNumber * featureShouldShowInBetaScreen; 
-(void)setFeatureServerName:(NSString *)arg1 ;
-(void)setFeatureKey:(NSString *)arg1 ;
-(void)setFeatureShouldShowInBetaScreen:(NSNumber *)arg1 ;
-(void)setFeatureDefaultLocalValue:(NSNumber *)arg1 ;
-(void)setFeatureDefaultTinySpeckValue:(NSNumber *)arg1 ;
-(NSString *)featureServerName;
-(NSNumber *)featureForcedValue;
-(NSNumber *)featureServerValue;
-(NSNumber *)featureDefaultTinySpeckValue;
-(NSNumber *)featureDefaultLocalValue;
-(NSNumber *)featureShouldShowInBetaScreen;
-(void)setFeatureServerValue:(NSNumber *)arg1 ;
-(NSString *)featureKey;
-(void)setFeatureForcedValue:(NSNumber *)arg1 ;
-(void)setFeatureName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)featureName;
@end

