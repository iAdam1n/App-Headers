/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView;

@interface FBCollageItem : NSObject <NSCopying> {

	UIView* _view;
	CGRect _rect;

}

@property (nonatomic,retain) UIView * view;              //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) CGRect rect;                //@synthesize rect=_rect - In the implementation block
+(id)collageItemWithRect:(CGRect)arg1 ;
-(id)initWithView:(id)arg1 rect:(CGRect)arg2 ;
-(CGRect)frameForXRatio:(double)arg1 yRatio:(double)arg2 ;
-(id)description;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
@end
