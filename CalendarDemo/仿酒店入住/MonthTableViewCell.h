//
//  MonthTableViewCell.h
//  BJTResearch
//
//  Created by gaoxin on 2018/1/3.
//  Copyright © 2018年 HZCitizenCard. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MonthModel,DayModel;
typedef void(^SelectedDay)(DayModel *returnDaymodel);
@interface MonthTableViewCell : UICollectionViewCell
@property(nonatomic,strong) MonthModel *model;
@property(nonatomic,copy)SelectedDay selectedDay;
//+ (instancetype)cellWithTableView:(UITableView *)tableView;
- (void)setContentView;
@end
