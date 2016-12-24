/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, NSIndexPath, UILongPressGestureRecognizer;

@interface EBUPreviewActionGesture : NSObject {

	UIView* _view;
	NSIndexPath* _indexPath;
	UILongPressGestureRecognizer* _recognizer;

}

@property (assign,nonatomic,__weak) UIView * view;                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
-(UIView *)view;
-(NSIndexPath *)indexPath;
-(void)setView:(UIView *)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(UILongPressGestureRecognizer *)recognizer;
-(void)setRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end
