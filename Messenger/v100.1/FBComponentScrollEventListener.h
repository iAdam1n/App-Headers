/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComponentScrollEventListener <NSObject>
@optional
-(void)scrollViewWillEndDragging:(FBScrollViewState)arg1 withVelocity:(CGPoint)arg2 fixedTargetContentOffset:(CGPoint)arg3;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1;
-(void)scrollViewWillBeginDragging:(FBScrollViewState)arg1;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2;
-(void)scrollViewWillBeginDecelerating:(FBScrollViewState)arg1;
-(void)scrollViewDidEndDecelerating:(FBScrollViewState)arg1;
-(void)scrollViewDidEndScrollingAnimation:(FBScrollViewState)arg1;
-(void)scrollViewDidScrollToTop:(FBScrollViewState)arg1;

@end
