/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/NCommentCell.h>

@class MessageHeaderBarOverlay, MessageNode, Message;

@interface NMessageCell : NCommentCell {

	MessageHeaderBarOverlay* _messageHeaderBarOverlay;

}

@property (retain) MessageHeaderBarOverlay * messageHeaderBarOverlay;              //@synthesize messageHeaderBarOverlay=_messageHeaderBarOverlay - In the implementation block
@property (readonly) MessageNode * messageNode; 
@property (readonly) Message * message; 
+(double)heightForCellFooterForNode:(id)arg1 bounds:(CGRect)arg2 ;
+(double)heightForCellHeaderForNode:(id)arg1 bounds:(CGRect)arg2 ;
+(double)minimumHeightForCellTextForNode:(id)arg1 bounds:(CGRect)arg2 ;
+(BOOL)shouldExpandTextToFullWidthWhenSelected;
+(double)indentForCellTextForNode:(id)arg1 bounds:(CGRect)arg2 ;
-(void)createSubviews;
-(void)decorateCellBackground;
-(void)updateWithNode:(id)arg1 ;
-(void)attachOptionsDrawerIfNecessary;
-(MessageNode *)messageNode;
-(void)setMessageHeaderBarOverlay:(MessageHeaderBarOverlay *)arg1 ;
-(MessageHeaderBarOverlay *)messageHeaderBarOverlay;
-(void)didTapHeaderBar;
-(void)didTapContents;
-(Message *)message;
@end

