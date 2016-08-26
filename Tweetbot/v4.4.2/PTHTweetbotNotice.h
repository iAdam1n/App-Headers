/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, UIImage;

@interface PTHTweetbotNotice : NSObject {

	long long _type;
	NSString* _title;
	NSAttributedString* _attributedTitle;
	NSString* _message;
	NSAttributedString* _attributedMessage;
	NSString* _actionTitle;
	double _presentTimeInterval;
	double _dismissTimeInterval;
	UIImage* _avatarImage;
	NSString* _soundName;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedTitle;                //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,copy) NSString * message;                                  //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedMessage;              //@synthesize attributedMessage=_attributedMessage - In the implementation block
@property (nonatomic,copy) NSString * actionTitle;                              //@synthesize actionTitle=_actionTitle - In the implementation block
@property (assign,nonatomic) double presentTimeInterval;                        //@synthesize presentTimeInterval=_presentTimeInterval - In the implementation block
@property (assign,nonatomic) double dismissTimeInterval;                        //@synthesize dismissTimeInterval=_dismissTimeInterval - In the implementation block
@property (nonatomic,retain) UIImage * avatarImage;                             //@synthesize avatarImage=_avatarImage - In the implementation block
@property (nonatomic,copy) NSString * soundName;                                //@synthesize soundName=_soundName - In the implementation block
@property (nonatomic,copy) id completion;                                       //@synthesize completion=_completion - In the implementation block
+(id)failureSoundName;
+(id)successSoundName;
+(id)shortMessageFont;
+(id)titleFont;
+(id)messageFont;
-(void)setDismissTimeInterval:(double)arg1 ;
-(void)setPresentTimeInterval:(double)arg1 ;
-(void)setAvatarImage:(UIImage *)arg1 ;
-(double)dismissTimeInterval;
-(double)presentTimeInterval;
-(UIImage *)avatarImage;
-(id)init;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)title;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(void)setSoundName:(NSString *)arg1 ;
-(NSString *)soundName;
-(void)setAttributedMessage:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedMessage;
-(void)setActionTitle:(NSString *)arg1 ;
-(NSString *)actionTitle;
@end
