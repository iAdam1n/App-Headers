/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:47 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol UIScrollViewDelegate <NSObject>
@optional
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewDidZoom:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)scrollViewWillBeginDecelerating:(id)arg1;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1;
-(id)viewForZoomingInScrollView:(id)arg1;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1;
-(void)scrollViewDidScrollToTop:(id)arg1;

@end

