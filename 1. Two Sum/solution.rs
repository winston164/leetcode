use std::collections::HashMap;
impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut matches = HashMap::new();
        for (index, num) in (0..).zip(nums.into_iter()){
            if matches.contains_key(&num) {
                let mut nums = Vec::new();
                nums.push(matches.get(&num).unwrap().to_owned());
                nums.push(index);
                return nums;
            }
            matches.insert(target - num, index);
        }
        return vec![];
    }
}
