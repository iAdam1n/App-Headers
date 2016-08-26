/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMagicStoryProcessors : NSObject
+(id)filteringProcessorsForSession:(id)arg1 ;
+(id)finalizingProcessorsForSession:(id)arg1 ;
+(id)classifierProcessorsForSession:(id)arg1 ;
+(id)minimumAssetCountFilterProcessorWithMinimumAssetCount:(unsigned long long)arg1 ;
+(id)removeShortAndLongVideoAssetsFilterProcessorWithContext:(id)arg1 ;
+(id)limitNumberOfVideoAssetsProcessorWithContext:(id)arg1 ;
+(id)removePanoramaAssetsFilterProcessor;
+(id)blockUntilIndexesDoneProcessorWithImageAttributeIndexConfiguration:(id)arg1 ;
+(id)metadataIndexFilterProcessorForExperimentContext:(id)arg1 ;
+(id)badPhotoRemovalProcessorForExperimentContext:(id)arg1 ;
+(id)dupeDetectorForBurstsMapProcessorWithImageAttributeIndexConfiguration:(id)arg1 ;
+(id)maximumAssetCountProcessorWithMaximumAssetCount:(unsigned long long)arg1 ;
+(id)updateSouvenirUniqueIDIfNilProcessor;
+(id)locationBasedTitleGenerationProcessorForSession:(id)arg1 ;
+(id)movieTopicGenerationProcessorForSession:(id)arg1 ;
+(id)dismissStoriesOrAmendDataBasedOnClassifierRankingScoreProcessorUsingSession:(id)arg1 ;
@end
