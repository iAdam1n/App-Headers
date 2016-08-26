/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIButton, NSArray;


@protocol FBCommentStreamViewHeaderProtocol <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) UIButton * backButton; 
@property (nonatomic,readonly) UIButton * doneButton; 
@property (assign,nonatomic) BOOL shouldShowDoneButton; 
@property (nonatomic,copy) NSArray * leftHeaderButtons; 
@property (nonatomic,copy) NSArray * rightHeaderButtons; 
@optional
-(NSArray *)leftHeaderButtons;
-(void)setLeftHeaderButtons:(id)arg1;
-(NSArray *)rightHeaderButtons;
-(void)setRightHeaderButtons:(id)arg1;

@required
+(UIEdgeInsets*)headerContentInsets;
+(double)headerHeight;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(UIButton *)doneButton;
-(UIButton *)backButton;
-(void)setShouldShowDoneButton:(BOOL)arg1;
-(BOOL)shouldShowDoneButton;

@end
