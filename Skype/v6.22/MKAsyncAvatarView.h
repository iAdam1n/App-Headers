/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/MKAvatarView.h>

@class UIImage, NSURL, NSURLConnection, NSMutableData, MKActivityIndicatorView;

@interface MKAsyncAvatarView : MKAvatarView {

	BOOL _shouldShowActivityIndicator;
	UIImage* _placeholderImage;
	NSURL* _urlImage;
	NSURLConnection* _connection;
	NSMutableData* _data;
	MKActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) NSURLConnection * connection;                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                                     //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) MKActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL shouldShowActivityIndicator;                         //@synthesize shouldShowActivityIndicator=_shouldShowActivityIndicator - In the implementation block
@property (nonatomic,copy) UIImage * placeholderImage;                                 //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) NSURL * urlImage;                                         //@synthesize urlImage=_urlImage - In the implementation block
-(void)setShouldShowActivityIndicator:(BOOL)arg1 ;
-(BOOL)shouldShowActivityIndicator;
-(void)mk_commonInit;
-(void)setUrlImage:(NSURL *)arg1 ;
-(NSURL *)urlImage;
-(void)dealloc;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(MKActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(MKActivityIndicatorView *)arg1 ;
@end
