/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBDirectInboxBucket, NSArray, FBInlineSnacksPostingState;

@interface FBInlineSnacksModel : FBValueObject <NSCopying> {

	FBDirectInboxBucket* _viewerBucket;
	NSArray* _friendBuckets;
	long long _loadingState;
	FBInlineSnacksPostingState* _postingState;

}

@property (nonatomic,copy,readonly) FBDirectInboxBucket * viewerBucket;                     //@synthesize viewerBucket=_viewerBucket - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friendBuckets;                                //@synthesize friendBuckets=_friendBuckets - In the implementation block
@property (nonatomic,readonly) long long loadingState;                                      //@synthesize loadingState=_loadingState - In the implementation block
@property (nonatomic,copy,readonly) FBInlineSnacksPostingState * postingState;              //@synthesize postingState=_postingState - In the implementation block
-(id)initWithViewerBucket:(id)arg1 friendBuckets:(id)arg2 loadingState:(long long)arg3 postingState:(id)arg4 ;
-(FBInlineSnacksPostingState *)postingState;
-(FBDirectInboxBucket *)viewerBucket;
-(NSArray *)friendBuckets;
-(long long)loadingState;
@end
