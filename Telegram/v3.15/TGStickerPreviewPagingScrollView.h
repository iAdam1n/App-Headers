/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIScrollView.h>

@class TGStickerPack, NSMutableArray;

@interface TGStickerPreviewPagingScrollView : UIScrollView {

	double _pageGap;
	TGStickerPack* _stickerPack;
	NSMutableArray* _visiblePages;
	NSMutableArray* _pageQueue;
	/*^block*/id _pageChanged;

}

@property (nonatomic,copy) id pageChanged;              //@synthesize pageChanged=_pageChanged - In the implementation block
-(void)setStickerPack:(id)arg1 ;
-(id)documentAtPoint:(CGPoint)arg1 ;
-(void)setPageChanged:(id)arg1 ;
-(id)dequeuePage;
-(void)enqueuePage:(id)arg1 ;
-(id)pageChanged;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(unsigned long long)pageCount;
@end
