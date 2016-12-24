/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLDownloadRequest.h>
#import <Facebook/FBTaggableDeltaDownloadRequestProtocol.h>

@class NSString;

@interface FBTaggableFriendsCollectionDeltaDownloadRequest : FBGraphQLDownloadRequest <FBTaggableDeltaDownloadRequestProtocol> {

	NSString* _deltaCursor;

}

@property (nonatomic,copy) NSString * deltaCursor;                  //@synthesize deltaCursor=_deltaCursor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)deltaCursor;
-(void)setDeltaCursor:(NSString *)arg1 ;
-(id)newQuery;
@end
