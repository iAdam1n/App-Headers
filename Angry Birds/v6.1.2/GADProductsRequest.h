/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/SKProductsRequestDelegate.h>

@protocol OS_dispatch_queue;
@class SKProductsRequest, NSObject, NSString;

@interface GADProductsRequest : NSObject <SKProductsRequestDelegate> {

	SKProductsRequest* _productsRequest;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)requestProductsWithProductIdentifiers:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithProductIdentifiers:(id)arg1 ;
@end

