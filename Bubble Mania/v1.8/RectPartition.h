/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@interface RectPartition : NSObject {

	EmptyRectNode* rectTree;
	int freeSpaces;
	int entireRectWidth;
	int entireRectHeight;

}

@property (assign,nonatomic) int entireRectWidth; 
@property (assign,nonatomic) int entireRectHeight; 
-(float)freeSpace;
-(void)freeNode:(EmptyRectNode*)arg1 ;
-(int)entireRectHeight;
-(int)entireRectWidth;
-(EmptyRectNode*)searchInRect:(EmptyRectNode*)arg1 width:(int)arg2 height:(int)arg3 ;
-(void)increaseWidthTo:(EmptyRectNode*)arg1 by:(int)arg2 ;
-(void)setEntireRectWidth:(int)arg1 ;
-(void)expandRect;
-(id)initWithImageWidth:(int)arg1 height:(int)arg2 ;
-(EmptyRectNode*)findPlaceForWidth:(int)arg1 height:(int)arg2 ;
-(BOOL)insertImage:(id)arg1 into:(EmptyRectNode*)arg2 ;
-(void)setEntireRectHeight:(int)arg1 ;
-(void)dealloc;
@end

