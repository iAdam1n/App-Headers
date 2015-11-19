/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/SKProductsRequestDelegate.h>

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
