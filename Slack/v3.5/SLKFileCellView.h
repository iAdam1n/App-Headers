/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/SLKBaseCellView.h>

@class SLKFileCell, SLKDependencies;

@interface SLKFileCellView : SLKBaseCellView {

	SLKFileCell* _cell;
	SLKDependencies* _dependencies;

}

@property (assign,nonatomic,__weak) SLKFileCell * cell;                          //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
-(void)drawFile:(CGRect)arg1 ;
-(void)drawCleanFile:(CGRect)arg1 ;
-(void)drawFileListFile:(CGRect)arg1 ;
-(id)privacyLabelForFile:(id)arg1 withPrefix:(id)arg2 ;
-(CGSize)snippetSize;
-(SLKDependencies *)dependencies;
-(void)drawRect:(CGRect)arg1 ;
-(SLKFileCell *)cell;
-(void)setCell:(SLKFileCell *)arg1 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
