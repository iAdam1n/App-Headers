/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>

@interface SKPApplication : UIApplication {

	BOOL _launchingInBackground;
	BOOL _protectedSkyLibDataAvailable;
	unsigned long long _networkActivityIndicatorVisibleStackDepth;

}

@property (assign,nonatomic) unsigned long long networkActivityIndicatorVisibleStackDepth;                         //@synthesize networkActivityIndicatorVisibleStackDepth=_networkActivityIndicatorVisibleStackDepth - In the implementation block
@property (assign,nonatomic) BOOL launchingInBackground;                                                           //@synthesize launchingInBackground=_launchingInBackground - In the implementation block
@property (assign,getter=isProtectedSkyLibDataAvailable,nonatomic) BOOL protectedSkyLibDataAvailable;              //@synthesize protectedSkyLibDataAvailable=_protectedSkyLibDataAvailable - In the implementation block
-(BOOL)launchingInBackground;
-(void)updateProtectedSkylibDataAvailable;
-(void)setLaunchingInBackground:(BOOL)arg1 ;
-(BOOL)isProtectedSkyLibDataAvailable;
-(void)setProtectedSkyLibDataAvailable:(BOOL)arg1 ;
-(void)startLaunchingInBackground;
-(void)finishedLaunchingInBackground;
-(void)dismissAllPresentedViewControllersWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)networkActivityIndicatorVisibleStackDepth;
-(void)setNetworkActivityIndicatorVisibleStackDepth:(unsigned long long)arg1 ;
-(BOOL)createTempDirectoryWithName:(id)arg1 atPath:(id)arg2 ;
-(BOOL)createFileWithName:(id)arg1 andContent:(id)arg2 atPath:(id)arg3 ;
-(id)readContentFromFileWithName:(id)arg1 atPath:(id)arg2 ;
-(void)pushNetworkActivityIndicatorVisible;
-(void)popNetworkActivityIndicatorVisible;
-(id)skp_childObjects:(BOOL)arg1 invokedFromClass:(Class)arg2 ;
@end
