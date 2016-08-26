/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GADAdConfiguration, NSSet, NSDictionary;

@interface GADAdLoaderConfiguration : NSObject {

	GADAdConfiguration* _adConfiguration;
	NSSet* _adTypeClasses;
	NSSet* _adTypes;

}

@property (nonatomic,copy,readonly) NSSet * adTypeClasses;               //@synthesize adTypeClasses=_adTypeClasses - In the implementation block
@property (nonatomic,copy,readonly) NSSet * adTypes;                     //@synthesize adTypes=_adTypes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options; 
-(id)initWithAdTypes:(id)arg1 options:(id)arg2 ;
-(NSSet *)adTypeClasses;
-(NSSet *)adTypes;
-(NSDictionary *)options;
-(id)requestParameters;
@end
