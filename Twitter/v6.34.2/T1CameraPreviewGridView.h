/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface T1CameraPreviewGridView : UIView {

	NSMutableArray* _verticalLineLayers;
	NSMutableArray* _horizontalLineLayers;
	unsigned long long _numberOfGridLines;

}

@property (assign,nonatomic) unsigned long long numberOfGridLines;              //@synthesize numberOfGridLines=_numberOfGridLines - In the implementation block
-(unsigned long long)numberOfGridLines;
-(id)_layerForGridLine;
-(void)setNumberOfGridLines:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

