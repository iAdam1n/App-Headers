/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@interface FBCropRectangleView : UIView {

	int _style;
	BOOL _shouldDrawInnerGrid;
	double _boundsInsetFromCrop;

}

@property (assign,nonatomic) double boundsInsetFromCrop;              //@synthesize boundsInsetFromCrop=_boundsInsetFromCrop - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawInnerGrid;                //@synthesize shouldDrawInnerGrid=_shouldDrawInnerGrid - In the implementation block
-(void)setShouldDrawInnerGrid:(BOOL)arg1 ;
-(double)boundsInsetFromCrop;
-(void)setBoundsInsetFromCrop:(double)arg1 ;
-(BOOL)shouldDrawInnerGrid;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isOpaque;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
@end

