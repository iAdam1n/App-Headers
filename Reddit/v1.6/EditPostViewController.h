/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/BaseViewController.h>

@class Post, EditPostView;

@interface EditPostViewController : BaseViewController {

	Post* _post;
	EditPostView* _editPostView;

}

@property (nonatomic,retain) Post * post;                              //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) EditPostView * editPostView;              //@synthesize editPostView=_editPostView - In the implementation block
-(void)didTapClose;
-(Post *)post;
-(void)setPost:(Post *)arg1 ;
-(id)initWithPost:(id)arg1 ;
-(EditPostView *)editPostView;
-(void)didTapDoneButton;
-(void)setEditPostView:(EditPostView *)arg1 ;
-(void)viewDidLoad;
@end
