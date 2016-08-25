/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableDictionary;

@interface OptionCellView : UIView {

	NSMutableDictionary* option_;
	BOOL _shouldIgnoreNextTouchEnded;

}

@property (retain) NSMutableDictionary * option; 
@property (assign) BOOL shouldIgnoreNextTouchEnded;              //@synthesize shouldIgnoreNextTouchEnded=_shouldIgnoreNextTouchEnded - In the implementation block
-(void)setNewOption:(id)arg1 ;
-(void)setShouldIgnoreNextTouchEnded:(BOOL)arg1 ;
-(BOOL)shouldIgnoreNextTouchEnded;
-(void)drawTitleBackground;
-(void)drawRect:(CGRect)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(NSMutableDictionary *)option;
-(void)setOption:(NSMutableDictionary *)arg1 ;
@end

