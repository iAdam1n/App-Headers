/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBDirectOptimisticHelpers : NSObject
+(id)optimisticMessageFromPublishingTask:(id)arg1 session:(id)arg2 ;
+(id)optimisticThreadFromPublishingTask:(id)arg1 withOptimisticMessage:(id)arg2 otherParticipantGraphQLID:(id)arg3 ;
+(id)optimisticBucketWithThread:(id)arg1 existingBucket:(id)arg2 userFBID:(id)arg3 ;
+(id)_arrayByMergingOptimisticTextRepliesWithBuckets:(id)arg1 session:(id)arg2 ;
+(id)threadInBucket:(id)arg1 forTask:(id)arg2 ;
+(id)messageFromPublishingTask:(id)arg1 useNewBackend:(BOOL)arg2 ;
+(id)mergedBucketsWithOptimisticData:(id)arg1 session:(id)arg2 ;
@end
