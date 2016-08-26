/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFontRegisterDataSource.h>

@protocol OS_dispatch_queue;
@class FBFontFetchController, FBFontRegister, NSMutableDictionary, NSObject, NSString;

@interface FBFontManager : NSObject <FBFontRegisterDataSource> {

	FBFontFetchController* _fetchController;
	FBFontRegister* _register;
	NSMutableDictionary* _workingFontData;
	mutex _workingFontDataLock;
	NSMutableDictionary* _workingFontRequests;
	NSObject*<OS_dispatch_queue> _workingQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchHandlesForResources:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchCacheStateForFontResources:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithDiskCache:(id)arg1 ;
-(void)fetchCacheStateForFontResource:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchHandleForResource:(id)arg1 callbackQueue:(id)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_registerFontHandlesForResponse:(id)arg1 withResource:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_addWorkingData:(id)arg1 forFontName:(id)arg2 withRequest:(id)arg3 ;
-(void)_removeWorkingDataForFontName:(id)arg1 withRequest:(id)arg2 ;
-(void)releaseHandles:(id)arg1 ;
-(void)fetchHandleForResource:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)releaseHandle:(id)arg1 ;
-(id)_workingDataForFontWithName:(id)arg1 ;
-(id)fontRegister:(id)arg1 dataForFontWithName:(id)arg2 ;
@end
