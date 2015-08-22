/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNRevealableDeleteButtonHost <NSObject>
@property (assign,nonatomic) BOOL canRevealDeleteButton; 
@property (assign,getter=isShowingDeleteButton,nonatomic) BOOL showingDeleteButton; 
@property (assign,getter=isDeleteButtonEnabled,nonatomic) BOOL deleteButtonEnabled; 
@required
-(BOOL)isShowingDeleteButton;
-(void)setShowingDeleteButton:(BOOL)arg1;
-(void)setDeleteButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)isDeleteButtonEnabled;
-(BOOL)canRevealDeleteButton;
-(void)setCanRevealDeleteButton:(BOOL)arg1;
-(void)setDeleteButtonEnabled:(BOOL)arg1;

@end
