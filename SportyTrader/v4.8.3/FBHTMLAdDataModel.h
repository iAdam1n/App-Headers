/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FBAdDataModel.h>

@class NSString, NSURL, NSNumber;

@interface FBHTMLAdDataModel : FBAdDataModel {

	NSString* _markup;
	NSString* _activationCommand;
	NSURL* _nativeImpressionReportURL;
	NSString* _secondaryMarkup;
	NSString* _secondaryActivationCommand;
	long long _orientation;
	NSNumber* _isTablet;
	NSNumber* _adHeight;
	NSNumber* _adWidth;

}

@property (nonatomic,copy,readonly) NSString * markup;                                  //@synthesize markup=_markup - In the implementation block
@property (nonatomic,copy,readonly) NSString * activationCommand;                       //@synthesize activationCommand=_activationCommand - In the implementation block
@property (nonatomic,copy,readonly) NSURL * nativeImpressionReportURL;                  //@synthesize nativeImpressionReportURL=_nativeImpressionReportURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryMarkup;                         //@synthesize secondaryMarkup=_secondaryMarkup - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryActivationCommand;              //@synthesize secondaryActivationCommand=_secondaryActivationCommand - In the implementation block
@property (assign,nonatomic) long long orientation;                                     //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) NSNumber * isTablet;                                     //@synthesize isTablet=_isTablet - In the implementation block
@property (nonatomic,readonly) NSNumber * adHeight;                                     //@synthesize adHeight=_adHeight - In the implementation block
@property (nonatomic,readonly) NSNumber * adWidth;                                      //@synthesize adWidth=_adWidth - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(NSNumber *)adWidth;
-(NSNumber *)adHeight;
-(NSString *)secondaryMarkup;
-(NSString *)secondaryActivationCommand;
-(NSNumber *)isTablet;
-(NSString *)activationCommand;
-(NSURL *)nativeImpressionReportURL;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(BOOL)isValid;
-(id)initWithMetadata:(id)arg1 ;
-(NSString *)markup;
@end

