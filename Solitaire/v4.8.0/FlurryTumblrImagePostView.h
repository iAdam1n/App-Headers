/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/IFlurryTumblrPostView.h>
#import <UIKit/UITextViewDelegate.h>
#import <SolitaireFree/FlurryIGLDropDownMenuDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UINavigationBar, UITextView, UIImageView, UIBarButtonItem, FlurryIGLDropDownMenu, NSString, UIScrollView, NSArray;

@interface FlurryTumblrImagePostView : IFlurryTumblrPostView <UITextViewDelegate, FlurryIGLDropDownMenuDelegate, UIScrollViewDelegate> {

	UINavigationBar* _navBar;
	UITextView* _postCaptionTextView;
	UIImageView* _postImageView;
	UIBarButtonItem* _cancelButtonItem;
	UIBarButtonItem* _postButtonItem;
	FlurryIGLDropDownMenu* _dropDownMenu;
	NSString* _currentBlogName;
	UIScrollView* _blogsScrollView;
	UIImageView* _tagsImageView;
	UITextView* _tagsTextView;
	UIImageView* _linkImageView;
	NSString* _imagePath;
	NSString* _imageCaption;
	NSString* _avatarPath;
	NSArray* _blogName;
	NSString* _localizedText;

}

@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * postButtonItem;                  //@synthesize postButtonItem=_postButtonItem - In the implementation block
@property (nonatomic,retain) NSString * localizedText;                          //@synthesize localizedText=_localizedText - In the implementation block
@property (nonatomic,retain) UINavigationBar * navBar;                          //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UITextView * postCaptionTextView;                  //@synthesize postCaptionTextView=_postCaptionTextView - In the implementation block
@property (nonatomic,retain) UIImageView * postImageView;                       //@synthesize postImageView=_postImageView - In the implementation block
@property (nonatomic,retain) FlurryIGLDropDownMenu * dropDownMenu;              //@synthesize dropDownMenu=_dropDownMenu - In the implementation block
@property (nonatomic,retain) NSString * currentBlogName;                        //@synthesize currentBlogName=_currentBlogName - In the implementation block
@property (nonatomic,retain) UIScrollView * blogsScrollView;                    //@synthesize blogsScrollView=_blogsScrollView - In the implementation block
@property (nonatomic,retain) UIImageView * tagsImageView;                       //@synthesize tagsImageView=_tagsImageView - In the implementation block
@property (nonatomic,retain) UITextView * tagsTextView;                         //@synthesize tagsTextView=_tagsTextView - In the implementation block
@property (nonatomic,retain) UIImageView * linkImageView;                       //@synthesize linkImageView=_linkImageView - In the implementation block
@property (nonatomic,retain) NSString * imagePath;                              //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,retain) NSString * imageCaption;                           //@synthesize imageCaption=_imageCaption - In the implementation block
@property (nonatomic,retain) NSString * avatarPath;                             //@synthesize avatarPath=_avatarPath - In the implementation block
@property (nonatomic,retain) NSArray * blogName;                                //@synthesize blogName=_blogName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createView;
-(void)setCurrentBlogName:(NSString *)arg1 ;
-(NSString *)currentBlogName;
-(UITextView *)postCaptionTextView;
-(void)createNavigationBar;
-(void)setBlogName:(NSArray *)arg1 ;
-(void)setAvatarPath:(NSString *)arg1 ;
-(NSArray *)blogName;
-(void)setBlogsScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)blogsScrollView;
-(void)setDropDownMenu:(FlurryIGLDropDownMenu *)arg1 ;
-(FlurryIGLDropDownMenu *)dropDownMenu;
-(NSString *)avatarPath;
-(void)setUpParamsForDemo1;
-(void)setPostCaptionTextView:(UITextView *)arg1 ;
-(void)setPostImageView:(UIImageView *)arg1 ;
-(UIImageView *)postImageView;
-(void)setTagsImageView:(UIImageView *)arg1 ;
-(UIImageView *)tagsImageView;
-(void)tappedTagsImage:(id)arg1 ;
-(void)setTagsTextView:(UITextView *)arg1 ;
-(UITextView *)tagsTextView;
-(void)setLinkImageView:(UIImageView *)arg1 ;
-(UIImageView *)linkImageView;
-(void)post:(id)arg1 ;
-(void)setPostButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)postButtonItem;
-(void)dropDownMenu:(id)arg1 selectedItemAtIndex:(long long)arg2 ;
-(void)enableScrollingForBlogNames;
-(void)disableScrollingForBlogNames;
-(id)initWithImage:(id)arg1 caption:(id)arg2 blogName:(id)arg3 ;
-(BOOL)shouldMove;
-(id)init;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)displayImage;
-(void)cancel:(id)arg1 ;
-(NSString *)localizedText;
-(void)setLocalizedText:(NSString *)arg1 ;
-(NSString *)imageCaption;
-(void)setImageCaption:(NSString *)arg1 ;
-(void)setImagePath:(NSString *)arg1 ;
-(NSString *)imagePath;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
-(UIBarButtonItem *)cancelButtonItem;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
@end
