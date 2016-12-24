/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLConnectionSyncStoreRequestProvider.h>
#import <Facebook/FBMediaSetRequestProvider.h>

@class NSString;

@interface FBLocalPhotoMenuDownloadRequestProvider : NSObject <FBGraphQLConnectionSyncStoreRequestProvider, FBMediaSetRequestProvider> {

	NSString* _pageId;
	long long _imageSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)requestProviderID;
-(id)connectionSyncStore:(id)arg1 nextRequestAfter:(id)arg2 ;
-(id)connectionSyncStore:(id)arg1 previousRequestBefore:(id)arg2 ;
-(id)connectionSyncStore:(id)arg1 findRequest:(id)arg2 ;
-(id)connectionPageForResponse:(id)arg1 ;
-(const FBGraphQLFieldSetRef)edgeFieldSet;
-(id)mediaSetTitleForResponse:(id)arg1 session:(id)arg2 ;
-(id)initWithPageId:(id)arg1 imageSize:(long long)arg2 ;
@end
