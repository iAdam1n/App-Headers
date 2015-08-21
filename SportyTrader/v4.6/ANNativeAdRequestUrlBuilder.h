/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ANNativeAdTargetingProtocol;
@class NSString;

@interface ANNativeAdRequestUrlBuilder : NSObject {

	NSString* _baseUrlString;
	id<ANNativeAdTargetingProtocol> _adRequestDelegate;

}

@property (nonatomic,retain) NSString * baseUrlString;                                              //@synthesize baseUrlString=_baseUrlString - In the implementation block
@property (assign,nonatomic,__weak) id<ANNativeAdTargetingProtocol> adRequestDelegate;              //@synthesize adRequestDelegate=_adRequestDelegate - In the implementation block
+(id)requestUrlWithAdRequestDelegate:(id)arg1 baseUrlString:(id)arg2 ;
-(id)sizeParameter;
-(id)initWithAdRequestDelegate:(id)arg1 baseUrlString:(id)arg2 ;
-(id)requestUrl;
-(NSString *)baseUrlString;
-(id)idfaParameter;
-(id)reserveParameter;
-(id<ANNativeAdTargetingProtocol>)adRequestDelegate;
-(void)setBaseUrlString:(NSString *)arg1 ;
-(void)setAdRequestDelegate:(id<ANNativeAdTargetingProtocol>)arg1 ;
-(id)getParameterNames;
-(id)placementIdParameter;
-(id)dontTrackEnabledParameter;
-(id)deviceMakeParameter;
-(id)deviceModelParameter;
-(id)carrierMccMncParameters;
-(id)applicationIdParameter;
-(id)firstLaunchParameter;
-(id)locationParameter;
-(id)userAgentParameter;
-(id)connectionTypeParameter;
-(id)devTimeParameter;
-(id)languageParameter;
-(id)ageParameter;
-(id)genderParameter;
-(id)nonetParameter;
-(id)jsonFormatParameter;
-(id)supplyTypeParameter;
-(id)sdkVersionParameter;
-(id)customKeywordsParameter;
-(id)URLEncodingFrom:(id)arg1 ;
-(BOOL)stringInParameterList:(id)arg1 ;
-(id)queryString;
@end

