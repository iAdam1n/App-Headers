/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionstorePersistentPageLoaderOperation.h>

@protocol FBDiskCacheProtocol, FBGraphQLConnectionStorePersistentPageLoaderOperationDelegate;
@class NSString;

@interface FBGraphQLConnectionStorePersistentPageLoaderReadOperation : NSObject <FBGraphQLConnectionstorePersistentPageLoaderOperation> {

	id<FBDiskCacheProtocol> _diskCache;
	NSString* _diskCacheKey;
	long long _options;
	/*^block*/id _completionHandler;
	id<FBGraphQLConnectionStorePersistentPageLoaderOperationDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_synchronouslyLoadPage;
-(void)_asynchronouslyLoadPage;
-(void)startWithDelegate:(id)arg1 ;
-(id)initWithDiskCache:(id)arg1 diskCacheKey:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
