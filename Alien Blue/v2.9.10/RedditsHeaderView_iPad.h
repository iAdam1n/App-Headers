/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/NavigationBar_iPad.h>

@class JMViewOverlay;

@interface RedditsHeaderView_iPad : NavigationBar_iPad {

	JMViewOverlay* _editOverlay;
	JMViewOverlay* _doneOverlay;

}

@property (retain) JMViewOverlay * editOverlay;              //@synthesize editOverlay=_editOverlay - In the implementation block
@property (retain) JMViewOverlay * doneOverlay;              //@synthesize doneOverlay=_doneOverlay - In the implementation block
-(void)setDoneOverlay:(JMViewOverlay *)arg1 ;
-(JMViewOverlay *)doneOverlay;
-(void)setEditOverlay:(JMViewOverlay *)arg1 ;
-(JMViewOverlay *)editOverlay;
-(void)switchMode;
-(id)initWithFrame:(CGRect)arg1 ;
@end
