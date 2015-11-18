/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/SLKBaseCellView.h>

@class SLKFileCell;

@interface SLKFileCellView : SLKBaseCellView {

	SLKFileCell* _cell;

}

@property (assign,nonatomic,__weak) SLKFileCell * cell;              //@synthesize cell=_cell - In the implementation block
-(void)drawFile:(CGRect)arg1 ;
-(void)drawCleanFile:(CGRect)arg1 ;
-(void)drawFileListFile:(CGRect)arg1 ;
-(CGSize)snippetSize;
-(void)drawPost:(CGRect)arg1 ;
-(void)drawCompactFile:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(SLKFileCell *)cell;
-(void)setCell:(SLKFileCell *)arg1 ;
@end
