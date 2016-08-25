/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
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
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageScale:(double)arg1 ;
-(double)imageScale;
@end

