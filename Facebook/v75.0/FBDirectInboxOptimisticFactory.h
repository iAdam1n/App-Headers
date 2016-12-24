/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBDirectInboxOptimisticFactory : NSObject
+(id)optimisticThreadForPublishingTask:(id)arg1 toUserGraphQLID:(id)arg2 fromUserGraphQLID:(id)arg3 ;
+(id)optimisticPersonWithThreads:(id)arg1 copyPerson:(id)arg2 personGraphQLID:(id)arg3 session:(id)arg4 ;
+(id)optimisticThreadForBackstagePost:(id)arg1 threadGraphQLID:(id)arg2 toUserGraphQLID:(id)arg3 fromUserGraphQLID:(id)arg4 ;
+(id)backstagePostFromPublishingTask:(id)arg1 ;
+(id)sortedInboxBucketsForPeople:(id)arg1 ;
+(id)optimisticPeopleForCurrentPublishingTasks:(id)arg1 ;
+(id)mergedPersonWithOptimisticPerson:(id)arg1 existingPerson:(id)arg2 ;
+(id)optimisticPersonByMergingContentsOfPublishingTask:(id)arg1 existingPerson:(id)arg2 session:(id)arg3 ;
@end
