/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPhotoSwipingViewDelegate <NSObject>
@required
-(unsigned long long)numberOfPagesInPhotoSwipingView:(id)arg1;
-(void)photoSwipingView:(id)arg1 photoAtIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)photoSwipingView:(id)arg1 didSwipeToIndex:(unsigned long long)arg2 automatically:(BOOL)arg3;
-(unsigned long long)photoSwipingView:(id)arg1 indexForPhoto:(id)arg2;
-(BOOL)shouldShowInstructionalNUXForSwipingView:(id)arg1;
-(BOOL)shouldShowReminderNUXForSwipingView:(id)arg1;
-(void)didEndShowingInstructionalNuxForPhotoSwipingView:(id)arg1;

@end
