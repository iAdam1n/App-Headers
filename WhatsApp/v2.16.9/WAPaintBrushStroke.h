/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, WAPaintBrush, NSArray;

@interface WAPaintBrushStroke : NSObject {

	NSMutableArray* _renderers;
	NSMutableArray* _samples;
	WAPaintBrush* _brush;
	 _brushColor;

}

@property (nonatomic,readonly) WAPaintBrush * brush;                     //@synthesize brush=_brush - In the implementation block
@property (nonatomic,readonly)  brushColor;                              //@synthesize brushColor=_brushColor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allRenderers; 
-()brushColor;
-(void)enumeratePositionSamplesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithBrush:(id)arg1 ;
-(void)addRenderer:(id)arg1 ;
-(void)addPositionSample:(id)arg1 ;
-(NSArray *)allRenderers;
-(WAPaintBrush *)brush;
@end

