/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@protocol ChannelPromoImageDelegate;
@class NSMutableData, UIImage, NSObject, NSString;

@interface ChannelPromoImage : NSObject <NSURLConnectionDataDelegate> {

	id<ChannelPromoImageDelegate> _delegate;
	NSMutableData* _imageData;
	UIImage* _image;
	NSObject* _imageContainer;
	NSString* _elementName;

}

@property (assign,nonatomic) id<ChannelPromoImageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSMutableData * imageData;                           //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSObject * imageContainer;                           //@synthesize imageContainer=_imageContainer - In the implementation block
@property (assign,nonatomic) NSString * elementName;                              //@synthesize elementName=_elementName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanupImageData;
-(NSObject *)imageContainer;
-(void)setImageContainer:(NSObject *)arg1 ;
-(id)initWithUrl:(id)arg1 withName:(id)arg2 setTo:(id)arg3 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<ChannelPromoImageDelegate>)arg1 ;
-(void)dealloc;
-(id<ChannelPromoImageDelegate>)delegate;
-(UIImage *)image;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setImageData:(NSMutableData *)arg1 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(NSString *)elementName;
-(NSMutableData *)imageData;
-(void)setElementName:(NSString *)arg1 ;
@end

