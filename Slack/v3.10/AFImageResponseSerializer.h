/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/AFHTTPResponseSerializer.h>

@interface AFImageResponseSerializer : AFHTTPResponseSerializer {

	BOOL _automaticallyInflatesResponseImage;
	double _imageScale;

}

@property (assign,nonatomic) double imageScale;                                    //@synthesize imageScale=_imageScale - In the implementation block
@property (assign,nonatomic) BOOL automaticallyInflatesResponseImage;              //@synthesize automaticallyInflatesResponseImage=_automaticallyInflatesResponseImage - In the implementation block
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setAutomaticallyInflatesResponseImage:(BOOL)arg1 ;
-(BOOL)automaticallyInflatesResponseImage;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageScale:(double)arg1 ;
-(double)imageScale;
@end
