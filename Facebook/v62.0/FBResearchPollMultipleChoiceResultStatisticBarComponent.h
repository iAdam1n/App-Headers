/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponent.h>

@interface FBResearchPollMultipleChoiceResultStatisticBarComponent : CKComponent {

	float _percentage;
	unsigned long long _optionIndex;

}

@property (assign,nonatomic) float percentage;                            //@synthesize percentage=_percentage - In the implementation block
@property (assign,nonatomic) unsigned long long optionIndex;              //@synthesize optionIndex=_optionIndex - In the implementation block
+(id)newWithUniqueIdentifier:(id)arg1 percentage:(float)arg2 optionIndex:(unsigned long long)arg3 ;
-(void)setOptionIndex:(unsigned long long)arg1 ;
-(unsigned long long)optionIndex;
-(float)percentage;
-(void)setPercentage:(float)arg1 ;
@end
