/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/TAGDataLayerPersistentStoreCallback.h>

@class TAGDataLayer, NSString;

@interface TAGDataLayerCallback : NSObject <TAGDataLayerPersistentStoreCallback> {

	TAGDataLayer* _dataLayer;

}

@property (readonly) TAGDataLayer * dataLayer;                      //@synthesize dataLayer=_dataLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TAGDataLayer *)dataLayer;
-(void)onKeyValuesLoaded:(id)arg1 ;
-(id)initWithDataLayer:(id)arg1 ;
@end

