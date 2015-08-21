/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <StoreKit/SKStoreProductViewController.h>
#import <Tweetbot/SKStoreProductViewControllerDelegate.h>

@class NSString;

@interface PTHStoreProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate> {

	/*^block*/id _completion;

}

@property (copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentProductPage:(unsigned long long)arg1 forViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

