/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNPhotoImageRequestOptions <NSObject,NSCopying>
@property (assign,nonatomic) long long version; 
@property (assign,nonatomic) long long deliveryMode; 
@property (assign,nonatomic) long long resizeMode; 
@property (assign,nonatomic) CGRect normalizedCropRect; 
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed; 
@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous; 
@property (nonatomic,copy) id progressHandler; 
@required
-(long long)deliveryMode;
-(long long)resizeMode;
-(BOOL)isNetworkAccessAllowed;
-(BOOL)isSynchronous;
-(void)setDeliveryMode:(long long)arg1;
-(void)setNetworkAccessAllowed:(BOOL)arg1;
-(void)setResizeMode:(long long)arg1;
-(void)setSynchronous:(BOOL)arg1;
-(id)progressHandler;
-(void)setVersion:(long long)arg1;
-(long long)version;
-(void)setProgressHandler:(/*^block*/id)arg1;
-(CGRect)normalizedCropRect;
-(void)setNormalizedCropRect:(CGRect)arg1;

@end
