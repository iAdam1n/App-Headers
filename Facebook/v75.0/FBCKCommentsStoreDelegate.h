/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCKCommentsStoreDelegate <NSObject>
@required
-(void)commentsStore:(id)arg1 didInsertHeadComments:(id)arg2 atIndexes:(id)arg3;
-(void)commentsStore:(id)arg1 didInsertTailComments:(id)arg2 atIndexes:(id)arg3;
-(void)commentsStore:(id)arg1 didInsertSubscriptionComments:(id)arg2 atIndexes:(id)arg3;
-(void)commentsStore:(id)arg1 didUpdateComments:(id)arg2 atIndexes:(id)arg3;
-(void)commentsStore:(id)arg1 didRemoveComments:(id)arg2 atIndexes:(id)arg3;
-(void)commentsStore:(id)arg1 didChangeRestoreState:(long long)arg2;
-(void)commentsStoreWillHandleGap:(id)arg1;

@end
