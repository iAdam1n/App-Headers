/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface InputEvent : NSObject {

	BOOL touch2;
	int state;
	int cursorX;
	int cursorY;
	int cursorX2;
	int cursorY2;

}

@property (assign,nonatomic) int state; 
@property (assign,nonatomic) int cursorX; 
@property (assign,nonatomic) int cursorY; 
@property (assign,nonatomic) int cursorX2; 
@property (assign,nonatomic) int cursorY2; 
@property (assign,nonatomic) BOOL touch2; 
-(int)cursorX;
-(void)setCursorX:(int)arg1 ;
-(int)cursorY;
-(void)setCursorY:(int)arg1 ;
-(BOOL)touch2;
-(void)setTouch2:(BOOL)arg1 ;
-(int)cursorX2;
-(void)setCursorX2:(int)arg1 ;
-(int)cursorY2;
-(void)setCursorY2:(int)arg1 ;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
@end

