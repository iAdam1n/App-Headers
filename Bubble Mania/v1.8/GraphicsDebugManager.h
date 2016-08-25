/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BillboardDebugSelectionDelegate;
#import <BubbleMania/BubbleMania-Structs.h>
@class NSMutableArray;

@interface GraphicsDebugManager : NSObject {

	NSMutableArray* dialogDebugList;
	BOOL graphicsDebugEnabled;
	BOOL inDebugView;
	BOOL debugBillboardSelection;
	id<BillboardDebugSelectionDelegate> billboardSelectionDelegate;

}

@property (assign,nonatomic) id<BillboardDebugSelectionDelegate> billboardSelectionDelegate; 
@property (nonatomic,readonly) BOOL graphicsDebugEnabled; 
@property (assign,nonatomic) BOOL inDebugView; 
@property (assign,nonatomic) BOOL debugBillboardSelection; 
+(id)instance;
-(BOOL)debugBillboardSelection;
-(void)handleTouchDownAtPoint:(CGPoint)arg1 ;
-(void)testShouldEnterDebugMode:(id)arg1 lastTouch1:(CGPoint)arg2 lastTouch2:(CGPoint)arg3 ;
-(void)setDebugBillboardSelection:(BOOL)arg1 ;
-(void)setBillboardSelectionDelegate:(id<BillboardDebugSelectionDelegate>)arg1 ;
-(id)checkSelectInLayer:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)enterDebugView;
-(id)dialogDebugList;
-(id<BillboardDebugSelectionDelegate>)billboardSelectionDelegate;
-(BOOL)graphicsDebugEnabled;
-(BOOL)inDebugView;
-(void)setInDebugView:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
@end

